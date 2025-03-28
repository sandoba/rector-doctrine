<?php

declare(strict_types=1);

use Rector\Config\RectorConfig;

use Rector\Doctrine\Rector\ClassMethod\ServiceEntityRepositoryParentCallToDIRector;

return static function (RectorConfig $rectorConfig): void {
    $rectorConfig->import(__DIR__ . '/../../../../../config/config.php');

    $rectorConfig->rule(ServiceEntityRepositoryParentCallToDIRector::class);
};
