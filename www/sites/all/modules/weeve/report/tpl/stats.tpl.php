<h4><?= t('Let’s look at some statistics for ' . $year . ':') ?></h4>

<?= $data ?>
<div id="weeve-report-stats-chart">&nbsp;</div>
<script type="text/javascript" src="https://www.google.com/jsapi"></script>
<script type="text/javascript">

  // Load the Visualization API and the piechart package.
  google.load('visualization', '1.0', {'packages':['corechart']});

  // Set a callback to run when the Google Visualization API is loaded.
  google.setOnLoadCallback(drawChart);

  // Callback that creates and populates a data table,
  // instantiates the pie chart, passes in the data and
  // draws it.
  function drawChart() {

    // Create the data table.
    var data = new google.visualization.DataTable();
    data.addColumn('string', 'Category');
    data.addColumn('number', 'Dollars');
    var rows = [];
    <?php foreach($category_data as $row): ?>
    rows.push(['<?= ucfirst($row->description) ?>', <?= $row->total ?>]);
    <?php endforeach; ?>
    data.addRows(rows);

    // Set chart options
    var options = {'title':'Dollars Approved by Category',
      'width':600,
      'height':500};

    // Instantiate and draw our chart, passing in some options.
    var chart = new google.visualization.PieChart(document.getElementById('weeve-report-stats-chart'));

    var formatter = new google.visualization.NumberFormat(
      {prefix: '$', negativeColor: 'red', negativeParens: true});
    formatter.format(data, 1);

    chart.draw(data, options);
  }
</script>