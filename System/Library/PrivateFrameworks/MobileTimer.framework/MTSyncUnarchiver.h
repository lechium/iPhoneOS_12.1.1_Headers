/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:12 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSKeyedUnarchiver.h>
#import <libobjc.A.dylib/MTCoder.h>

@protocol SYChangeSerializer;
@interface MTSyncUnarchiver : NSKeyedUnarchiver <MTCoder> {

	id<SYChangeSerializer> _serializer;

}

@property (nonatomic,retain) id<SYChangeSerializer> serializer;              //@synthesize serializer=_serializer - In the implementation block
-(id<SYChangeSerializer>)serializer;
-(void)setSerializer:(id<SYChangeSerializer>)arg1 ;
-(BOOL)mt_isWritingToPersistence;
-(BOOL)mt_isReadingFromPersistence;
-(BOOL)mt_isWritingToStorage;
@end

