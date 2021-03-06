/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallKit/CallKit-Structs.h>
#import <CallKit/CXCallAction.h>

@interface CXSetMutedCallAction : CXCallAction {

	BOOL _muted;

}

@property (assign,getter=isMuted,nonatomic) BOOL muted;              //@synthesize muted=_muted - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isMuted;
-(void)setMuted:(BOOL)arg1 ;
-(id)customDescription;
-(void)updateSanitizedCopy:(id)arg1 withZone:(NSZone*)arg2 ;
-(id)initWithCallUUID:(id)arg1 muted:(BOOL)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

