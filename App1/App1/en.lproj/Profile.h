//
//  Profile.h
//  App1
//
//  Created by macbook_006 on 4/29/14.
//  Copyright (c) 2014 framgia. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Profile : NSManagedObject

@property (nonatomic, retain) NSString * password;
@property (nonatomic, retain) NSString * attribute1;
@property (nonatomic, retain) NSString * email;
@property (nonatomic, retain) NSString * avatar;
@property (nonatomic, retain) NSNumber * id;

@end
