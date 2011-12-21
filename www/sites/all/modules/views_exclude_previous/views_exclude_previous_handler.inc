<?php
class views_exclude_previous_handler extends views_handler_filter_in_operator {
  function get_value_options() {
    $this->value_options = array(
      'loaded' => 'Nodes previously loaded via the nodeapi',
      'viewed_nodeapi' => 'Nodes previously prepared for viewing via the nodeapi',
      'viewed_row' => 'Nodes previously prepared for viewing via the views module default unformated/list/grid styles',
      'viewed_table' => 'Nodes previously prepared for viewing via the views module default table style',
    );
  }

  function option_definition() {
    $options = parent::option_definition();

    $options['operator']['default'] = 'not in';
    //$options['value']['default'] = array('loaded', 'viewed_nodeapi', 'viewed_row', 'viewed_table');
    $options['value']['default'] = array();

    return $options;
  }

  /**
   * Provide inclusive/exclusive matching
   */
  function operator_options() {
    return array(
      'not in' => t('Is not in'),
    );
  }

  function query() {
    $alias = $this->query->ensure_table('node');
    if (!$alias) return;
    if (!$this->value) return;
    
    $map = array(
      'loaded' => '***EXCLUDE_PREVIOUS_LOADED***',
      'viewed_nodeapi' => '***EXCLUDE_PREVIOUS_VIEWED_NODEAPI***',
      'viewed_row' => '***EXCLUDE_PREVIOUS_VIEWED_ROW***',
      'viewed_table' => '***EXCLUDE_PREVIOUS_VIEWED_TABLE***',
    );
    
    $list = array();
    foreach ($map as $k => $v) {
      if (in_array($k, $this->value)) {
        $list[] = $v;
      }
    }

    if ($list) {
      $list = implode(',', $list);
      $this->query->add_where($this->options['group'], $alias.'.nid NOT IN ('.$list.')');
    }
  }
}

