<?php

namespace Rector\Doctrine\Tests\Rector\Property\RemoveRedundantDefaultPropertyAnnotationValuesRector\Fixture\ManyToOne;

use Doctrine\ORM\Mapping as ORM;
use Rector\Doctrine\Tests\Rector\Property\RemoveRedundantDefaultPropertyAnnotationValuesRector\Source\Training;

/**
 * @ORM\Entity
 */
class FetchLazy
{
    /**
     * @ORM\ManyToOne(targetEntity=Training::class, fetch="LAZY")
     */
    private $trainings = [];
}

?>
-----
<?php

namespace Rector\Doctrine\Tests\Rector\Property\RemoveRedundantDefaultPropertyAnnotationValuesRector\Fixture\ManyToOne;

use Doctrine\ORM\Mapping as ORM;
use Rector\Doctrine\Tests\Rector\Property\RemoveRedundantDefaultPropertyAnnotationValuesRector\Source\Training;

/**
 * @ORM\Entity
 */
class FetchLazy
{
    /**
     * @ORM\ManyToOne(targetEntity=Training::class)
     */
    private $trainings = [];
}

?>
