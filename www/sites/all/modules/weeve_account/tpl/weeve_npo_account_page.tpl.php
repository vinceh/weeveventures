<div class='profile-wrapper'>
	<div class='profile-left'>
    <div class='profile-picture'><?php print theme('imagecache', 'scale_crop_200px', $account->photo, $account->name, $account->name); ?></div>
    <?php global $user; if($user->uid == $account->uid): ?>
      <div class='profile-edit-link'><?php print l(t('Edit Profile'), 'account/change'); ?></div>
    <?php endif; ?>

		<div class='profile-info-title'>Information</div>
		<div class='profile-info-content'><?php print t('Started !count Projects', array('!count' => $account->count_projects)); ?></div>
		<div class='profile-info-content'><?php print t('Raised $!money', array('!money' => $account->money)); ?></div>

		<div class='profile-info-title'>Contact</div>
		<div class='profile-info-content'><?php print $account->mail;?></div>

	</div>
	<div class='profile-right'>
		<div class='profile-title-section'>
			<div class='profile-name'><?php print $account->name; ?></div>
		</div>
		<div class='profile-links'>
			<div class='profile-link'><?php print l(t('about'), '#'); ?></div>
      <?php if ($settings['donation_history'] || $account->uid == $user->uid): ?>
			  <div class='profile-link'><?php print l(t('history'), 'account/'. $user->uid .'/donation-history'); ?></div>
      <?php endif; ?>
			<div class='profile-link'><?php print l(t('projects'), '#'); ?></div>
		</div>
		<div class='profile-main-wrapper'>
			<div class='profile-npo-content-title'>Who we are</div>
			<div class='profile-npo-content'>World Vision International, founded in the USA in 1977, is an evangelical[2] relief and development umbrella organization whose stated goal is "to follow our Lord and Saviour Jesus Christ in working with the poor and oppressed to promote human transformation, seek justice and bear witness to the good news of the Kingdom of God."[3] World Vision is one of the largest relief and development organizations in the world with a total revenue including grants, product and foreign donations of $2.6 billion (2008). <br/><br/>
			World Vision International as an umbrella organization was founded in 1977 by Walter Stanley Mooneyham the president of World Vision.[5][6] It was the result of a restructuring process that began already in the early 1970s within World Vision Inc. which was already founded in 1950 by Bob Pierce and did business as "World Vision International" since 1966.[7] World Vision International took over most international functions which were previously fulfilled by World Vision Inc. and was headquartered in Monrovia, California, in the same building as World Vision Inc. W. Mooneyham became also president of World Vision International until 1982 when he resigned after criticism within the International Board, where the accusations ranged from a dictatorial leadership style to an ethnocentric American communication style.
			</div>

			<div class='profile-npo-content-title'>Our main goals</div>
			<div class='profile-npo-content'>he Covenant of Partnership is a document that all national members of the World Vision Partnership have to sign. According to this document all national offices have to accept policies and decisions established by the International Board and must not establish a office or program outside their own national borders without the consent of World Vision International and the host country. Furthermore, with the exception of direct project founding, all funds intended for outside their national borders have to be remitted through World Vision International. Also the financial planning and budget principles adopted by the International Board have to be accepted as well as an examination of the financial affairs of the national offices by Partnership representatives.
			</div>
		</div>

	</div>
</div>