<? 
/**
 * Conf form
 */
function fluidinfo_configuracion() {
  $form['fluidinfo'] = array(
    '#type' => 'fieldset',
    '#title' => t('Configración'),
    '#collapsible' => TRUE,
    '#collapsed' => false,
  );
  $form['fluidinfo']['fluid_namespace'] = array(
    '#title' => t('namespace'),
    '#type' => 'textfield',
    '#default_value' => variable_get('fluid_namespace', 'drupalblog'),
    '#description' => 'Escriba un namespace para almacenar los objetos por ejemplo el nombre del host',
    '#required' => TRUE,
  );
  $form['fluidinfo']['fluid_user'] = array(
    '#title' => t('Usuario'),
    '#type' => 'textfield',
    '#default_value' => variable_get('fluid_user', ''),
    '#required' => TRUE,
  );
  $form['fluidinfo']['fluid_password'] = array(
    '#title' => t('Password'),
    '#type' => 'password',
    '#default_value' => variable_get('fluid_password', ''),
    '#required' => TRUE,
  );
  $form['fluidinfo']['node_types'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Node types'),
    '#description' => t('Que tipos de contenidos quieres imporar a fluidinfo?'),
    '#default_value' => variable_get('node_types', array()),
    '#options' => node_type_get_names(),
  );
  
  $form['fluidinfo']['fluid_sandbox'] = array(
    '#type' => 'checkbox',
    '#title' => t('Sandbox'),
    '#description' => t('Quieres usar el sanbox de fluidinfo para las pruebas'),
    '#default_value' => variable_get('fluid_sandbox', array()),
    '#options' => t('si'),
  );
  return system_settings_form($form);
}
