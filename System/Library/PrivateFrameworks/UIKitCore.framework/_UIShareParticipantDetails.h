/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:51 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, UIColor;

@interface _UIShareParticipantDetails : NSObject <NSSecureCoding> {

	NSString* _participantID;
	NSString* _detailText;
	UIColor* _participantColor;

}

@property (copy) NSString * participantID;                //@synthesize participantID=_participantID - In the implementation block
@property (copy) NSString * detailText;                   //@synthesize detailText=_detailText - In the implementation block
@property (copy) UIColor * participantColor;              //@synthesize participantColor=_participantColor - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)participantID;
-(void)setParticipantID:(NSString *)arg1 ;
-(NSString *)detailText;
-(void)setDetailText:(NSString *)arg1 ;
-(UIColor *)participantColor;
-(void)setParticipantColor:(UIColor *)arg1 ;
@end
