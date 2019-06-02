/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:41 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface ICDocCamRectangleResultsQueue : NSObject {

	NSMutableArray* _array;

}

@property (nonatomic,retain) NSMutableArray * array;              //@synthesize array=_array - In the implementation block
-(id)peek;
-(id)dequeue;
-(void)enqueue:(id)arg1 ;
-(void)apply:(/*^block*/id)arg1 fromIndex:(long long)arg2 toIndex:(unsigned long long)arg3 ;
-(id)peek:(long long)arg1 ;
-(id)peekTail;
-(void)apply:(/*^block*/id)arg1 atIndex:(long long)arg2 ;
-(NSMutableArray *)array;
-(long long)size;
-(id)init;
-(void)setArray:(NSMutableArray *)arg1 ;
-(void)clear;
@end
