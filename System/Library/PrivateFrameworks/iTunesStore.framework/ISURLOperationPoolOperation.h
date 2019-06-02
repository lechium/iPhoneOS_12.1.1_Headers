/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSMutableArray, ISURLOperation;

@interface ISURLOperationPoolOperation : ISOperation {

	long long _cancelCount;
	BOOL _forwardImmediately;
	NSMutableArray* _operations;

}

@property (nonatomic,readonly) ISURLOperation * mainOperation; 
-(BOOL)containsOperation:(id)arg1 ;
-(ISURLOperation *)mainOperation;
-(void)_forwardResponseFromOperation:(id)arg1 toOperation:(id)arg2 ;
-(void)dealloc;
-(void)addOperation:(id)arg1 ;
-(void)cancelOperation:(id)arg1 ;
-(void)run;
@end

