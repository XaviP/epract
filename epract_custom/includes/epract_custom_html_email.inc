<?php
/**
 * @file
 * Extends DefaultMailSystem class for sending html emails.
 */

/**
 * We extend DefaultMailSystem class for sending html emails.
 */
//class EpractCustomMailSystem extends DevelMailLog {
class EpractCustomMailSystem extends DefaultMailSystem {
  public function format(array $message) {
  	$message['headers']['Content-Type'] = 'text/html; charset=UTF-8;';
    $message['body'] = implode("\n\n", $message['body']);
    $message['body'] = drupal_wrap_mail($message['body']);
    return $message;
  }
}