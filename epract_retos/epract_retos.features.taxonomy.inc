<?php
/**
 * @file
 * epract_retos.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function epract_retos_taxonomy_default_vocabularies() {
  return array(
    'palabras_clave_para_contenido' => array(
      'name' => 'Palabras clave para contenido',
      'machine_name' => 'palabras_clave_para_contenido',
      'description' => 'Clasificación de contenidos de un grupo con retos',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
    'palabras_clave_para_grupos' => array(
      'name' => 'Palabras clave para grupos',
      'machine_name' => 'palabras_clave_para_grupos',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
