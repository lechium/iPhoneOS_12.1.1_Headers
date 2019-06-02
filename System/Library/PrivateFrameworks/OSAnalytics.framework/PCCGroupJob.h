/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:37 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OSAnalytics.framework/OSAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OSAnalytics/PCCJob.h>

@class NSMutableArray, NSDictionary;

@interface PCCGroupJob : PCCJob {

	NSMutableArray* _log_sets;
	NSDictionary* _content;
	unsigned _total_count;
	unsigned _rejected_count;
	unsigned _success_count;
	unsigned _error_count;
	unsigned _consecutive_error_count;

}
-(id)initWithID:(id)arg1 forTarget:(id)arg2 options:(id)arg3 ;
-(void)registerResult:(BOOL)arg1 error:(id)arg2 ;
-(void)prepareNext;
-(id)description;
-(id)result;
@end

