//
//  Grid.h
//  GameOfLife
//
//  Created by Jaudat Hussain Syed on 2014-07-10.
//  Copyright (c) 2014 Apportable. All rights reserved.
//

#import "CCSprite.h"

@interface Grid : CCSprite

@property (nonatomic, assign) int totalAlive;
@property (nonatomic, assign) int generation;

@end
