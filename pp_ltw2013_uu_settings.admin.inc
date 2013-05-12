<?php

/**
 * Admin menu page for the basic settings
 */
function pp_ltw2013_uu_admin_settings_form() {
	// form
		$form = array();

		$form['landesliste'] = array(
			'#type' => 'fieldset',
			'#title' => t('Landesliste'),
			'#description' => t("Der UU-Sammelbalken kann am Ende oder am Anfang angezeigt werden."),
		);

		$form['landesliste']['pp_ltw2013_landesliste_start'] = array(
			'#type' => 'checkbox',
			'#title' => t('Am Anfang anzeigen'),
			'#default_value' => variable_get('pp_ltw2013_landesliste_start', NULL),
		);
	
		$form['landesliste']['pp_ltw2013_landesliste_end'] = array(
			'#type' => 'checkbox',
			'#title' => t('Am Ende anzeigen'),
			'#default_value' => variable_get('pp_ltw2013_landesliste_end', NULL),
		);


		$form['kreiswahlvorschlaege'] = array(
			'#type' => 'fieldset',
			'#title' => t('Kreiswahlvorschläge'),
			'#description' => t("Die UU-Sammelbalken können pro Wahlkreis zur Anzeige ausgewählt werden."),
		);	

		$wks = array(
				"1"		=>	"Kassel-Land I",
				"2"		=>	"Kassel-Land II",	
				"3"		=>	"Kassel-Stadt I",	
				"4"		=>	"Kassel-Stadt II",
				"5"		=>	"Waldeck-Frankenberg I",
				"6"		=>	"Waldeck-Frankenberg II",
				"7"		=>	"Schwalm-Eder I",
				"8"		=>	"Schwalm-Eder II",
				"9"		=>	"Eschwege-Witzenhausen",
				"10"	=>	"Rotenburg",
				"11"	=>	"Hersfeld",
				"12"	=>	"Marburg-Biedenkopf I",
				"13"	=>	"Marburg-Biedenkopf II",
				"14"	=>	"Fulda I",
				"15"	=>	"Fulda II",
				"16"	=>	"Lahn-Dill I",
				"17"	=>	"Lahn-Dill II",
				"18"	=>	"Gießen I",
				"19"	=>	"Gießen II",
				"20"	=>	"Vogelsberg",
				"21"	=>	"Limburg-Weilburg I",
				"22"	=>	"Limburg-Weilburg II",
				"23"	=>	"Hochtaunus I",
				"24"	=>	"Hochtaunus II",
				"25"	=>	"Wetterau I",
				"26"	=>	"Wetterau II",
				"27"	=>	"Wetterau III",
				"28"	=>	"Rheingau-Taunus I",
				"29"	=>	"Rheingau-Taunus II",
				"30"	=>	"Wiesbaden I",
				"31"	=>	"Wiesbaden II",
				"32"	=>	"Main-Taunus I",
				"33"	=>	"Main-Taunus II",
				"34"	=>	"Frankfurt am Main I",
				"35"	=>	"Frankfurt am Main II",
				"36"	=>	"Frankfurt am Main III",
				"37"	=>	"Frankfurt am Main IV",
				"38"	=>	"Frankfurt am Main V",
				"39"	=>	"Frankfurt am Main VI",
				"40"	=>	"Main-Kinzig I",
				"41"	=>	"Main-Kinzig II",
				"42"	=>	"Main-Kinzig III",
				"43"	=>	"Offenbach-Stadt",
				"44"	=>	"Offenbach Land I",
				"45"	=>	"Offenbach Land II",
				"46"	=>	"Offenbach Land III",
				"47"	=>	"Groß-Gerau I",
				"48"	=>	"Groß-Gerau II",
				"49"	=>	"Darmstadt-Stadt I",
				"50"	=>	"Darmstadt-Stadt II",
				"51"	=>	"Darmstadt-Dieburg I",
				"52"	=>	"Darmstadt-Dieburg II",
				"53"	=>	"Odenwald",
				"54"	=>	"Bergstraße I",
				"55"	=>	"Bergstraße II",
		);

		foreach ($wks as $wk => $name) {
			$form['kreiswahlvorschlaege']['pp_ltw2013_wk'.$wk] = array(
				'#type' => 'checkbox',
				'#title' => t("WK ".$wk." (".$name.")"),
				'#default_value' => variable_get('pp_ltw2013_wk'.$wk, NULL),
			);
		}
		
	// return
		return system_settings_form($form);
}