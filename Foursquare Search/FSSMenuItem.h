//
//  FSSMenuItem.h
//  Foursquare Search
//
//  Created by Deniz Aydemir on 2/11/14.
//  Copyright (c) 2014 Deniz Aydemir. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FSSMenuItem : NSObject

@property (nonatomic) NSString *name;
@property (nonatomic) BOOL hasSubMenu;
@property (nonatomic) NSArray *subMenuItems;

@end
