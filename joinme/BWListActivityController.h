//
//  BWListActivityController.h
//  joinme
//
//  Created by bwang on 12/13/13.
//  Copyright (c) 2013 bwang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BWActivity.h"

@interface BWListActivityController : UITableViewController <UISearchBarDelegate, UISearchDisplayDelegate>

@property NSMutableArray *items;
@property NSMutableArray *filteredItems;
@property BWActivity *itemToSave;

@end
