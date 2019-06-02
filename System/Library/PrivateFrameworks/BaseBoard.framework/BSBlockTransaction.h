/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSTransaction.h>

@class NSString;

@interface BSBlockTransaction : BSTransaction {

	NSString* _debugName;
	/*^block*/id _block;

}

@property (nonatomic,copy) NSString * debugName;              //@synthesize debugName=_debugName - In the implementation block
-(id)_descriptionProem;
-(id)_graphNodeDebugName;
-(NSString *)debugName;
-(BOOL)_canBeInterrupted;
-(void)_begin;
-(void)setDebugName:(NSString *)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 ;
@end
