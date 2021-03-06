/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:01 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLDaemonJob.h>

@class NSMutableArray, NSArray;

@interface PHResourceAvailabilityJob : PLDaemonJob {

	NSMutableArray* _requests;
	NSArray* _cancelledRequestIdentifiers;

}
-(void)addRequest:(id)arg1 ;
-(void)runDaemonSide;
-(void)encodeToXPCObject:(id)arg1 ;
-(id)initFromXPCObject:(id)arg1 connection:(id)arg2 ;
-(long long)daemonOperation;
-(BOOL)shouldRunOnDaemonSerialQueue;
-(void)cancelAll;
-(id)description;
-(void)run;
@end

