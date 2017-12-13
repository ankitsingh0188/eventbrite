<?php
/**
 * @file
 * sf_features.features.inc
 */

/**
 * Implements hook_node_info().
 */
function sf_features_node_info() {
  $items = array(
    'webform' => array(
      'name' => t('Webform'),
      'base' => 'node_content',
      'description' => t('Create a new form or questionnaire accessible to users. Submission results and statistics are recorded and accessible to privileged users.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_default_salesforce_mapping().
 */
function sf_features_default_salesforce_mapping() {
  $items = array();
  $items['contacts'] = entity_import('salesforce_mapping', '{
    "type" : "salesforce_mapping",
    "name" : "contacts",
    "label" : "Contacts",
    "sync_triggers" : "63",
    "salesforce_object_type" : "Contact",
    "salesforce_record_types_allowed" : { "default" : "default" },
    "salesforce_record_type_default" : "default",
    "drupal_entity_type" : "user",
    "drupal_bundle" : "user",
    "field_mappings" : [
      {
        "drupal_field" : { "fieldmap_type" : "property", "fieldmap_value" : "mail" },
        "salesforce_field" : {
          "autoNumber" : false,
          "byteLength" : 240,
          "calculated" : false,
          "calculatedFormula" : null,
          "cascadeDelete" : false,
          "caseSensitive" : false,
          "controllerName" : null,
          "createable" : true,
          "custom" : false,
          "defaultValue" : null,
          "defaultValueFormula" : null,
          "defaultedOnCreate" : false,
          "dependentPicklist" : false,
          "deprecatedAndHidden" : false,
          "digits" : 0,
          "displayLocationInDecimal" : false,
          "externalId" : false,
          "filterable" : true,
          "groupable" : true,
          "htmlFormatted" : false,
          "idLookup" : true,
          "inlineHelpText" : null,
          "label" : "Email",
          "length" : 80,
          "name" : "Email",
          "nameField" : false,
          "namePointing" : false,
          "nillable" : true,
          "permissionable" : true,
          "picklistValues" : [],
          "precision" : 0,
          "referenceTo" : [],
          "relationshipName" : null,
          "relationshipOrder" : null,
          "restrictedDelete" : false,
          "restrictedPicklist" : false,
          "scale" : 0,
          "soapType" : "xsd:string",
          "sortable" : true,
          "type" : "email",
          "unique" : false,
          "updateable" : true,
          "writeRequiresMasterRead" : false
        },
        "key" : false,
        "direction" : "sync"
      },
      {
        "drupal_field" : { "fieldmap_type" : "property", "fieldmap_value" : "name" },
        "salesforce_field" : {
          "autoNumber" : false,
          "byteLength" : 240,
          "calculated" : false,
          "calculatedFormula" : null,
          "cascadeDelete" : false,
          "caseSensitive" : false,
          "controllerName" : null,
          "createable" : true,
          "custom" : false,
          "defaultValue" : null,
          "defaultValueFormula" : null,
          "defaultedOnCreate" : false,
          "dependentPicklist" : false,
          "deprecatedAndHidden" : false,
          "digits" : 0,
          "displayLocationInDecimal" : false,
          "externalId" : false,
          "filterable" : true,
          "groupable" : true,
          "htmlFormatted" : false,
          "idLookup" : false,
          "inlineHelpText" : null,
          "label" : "Last Name",
          "length" : 80,
          "name" : "LastName",
          "nameField" : false,
          "namePointing" : false,
          "nillable" : false,
          "permissionable" : false,
          "picklistValues" : [],
          "precision" : 0,
          "referenceTo" : [],
          "relationshipName" : null,
          "relationshipOrder" : null,
          "restrictedDelete" : false,
          "restrictedPicklist" : false,
          "scale" : 0,
          "soapType" : "xsd:string",
          "sortable" : true,
          "type" : "string",
          "unique" : false,
          "updateable" : true,
          "writeRequiresMasterRead" : false
        },
        "key" : false,
        "direction" : "sync"
      }
    ],
    "pull_trigger_date" : "LastModifiedDate",
    "push_async" : "0",
    "push_batch" : "0",
    "created" : "1512975073",
    "weight" : "0",
    "locked" : "0",
    "rdf_mapping" : []
  }');
  return $items;
}
