/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:10 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSWPReplaceAction.h>

@class TSWPChangeSession, NSString;

@interface TSWPTrackedDeletion : NSObject <TSWPReplaceAction> {

	NSRange _range;
	TSWPChangeSession* _changeSession;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSRange)insertedRange;
-(void)performWithStorage:(id)arg1 delta:(long long)arg2 undoTransaction:(TSWPStorageTransaction*)arg3 replaceBlock:(/*^block*/id)arg4 ;
-(unsigned long long)targetCharIndex;
-(id)initWithRange:(NSRange)arg1 changeSession:(id)arg2 ;
-(void)dealloc;
-(long long)delta;
@end

