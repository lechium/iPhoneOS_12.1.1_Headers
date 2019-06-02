/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:34 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSProgress.h>

@class NSXPCConnection;

@interface _NSProgressWithRemoteParent : NSProgress {

	NSXPCConnection* _parentConnection;
	unsigned long long _sequence;

}

@property (retain) NSXPCConnection * parentConnection;              //@synthesize parentConnection=_parentConnection - In the implementation block
@property (assign) unsigned long long sequence;                     //@synthesize sequence=_sequence - In the implementation block
-(void)setParentConnection:(NSXPCConnection *)arg1 ;
-(void)_updateFractionCompleted:(id)arg1 ;
-(void)_setUserInfoValue:(id)arg1 forKey:(id)arg2 fromChild:(BOOL)arg3 ;
-(NSXPCConnection *)parentConnection;
-(void)dealloc;
-(unsigned long long)sequence;
-(void)setSequence:(unsigned long long)arg1 ;
@end

