//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewDelegate.h"

@class NSArray, UITableView;

@protocol PHTableViewDelegate <UITableViewDelegate>

@optional
- (void)tableView:(UITableView *)arg1 performReloadRowsAtIndexPaths:(NSArray *)arg2 withRowAnimation:(long long)arg3 completion:(void (^)(void))arg4;
- (_Bool)tableViewCanPerformReloadData:(UITableView *)arg1;
@end

