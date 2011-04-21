//
//  CSManagedRepository.h
//  GithubNotifier
//
//  Created by Clint Shryock on 10/3/10.
//  Copyright 2010 scary-robot. All rights reserved.
//

#import <Cocoa/Cocoa.h>


@interface CSManagedRepository : NSManagedObject {

}
@property (nonatomic, retain) NSNumber * watcherCount;
@property (nonatomic, retain) NSNumber * isFork;

//	Transformable Attributes
@property (nonatomic, retain) NSMutableArray * watcherList;

@end
