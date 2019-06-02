/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:32 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NearField/NFFieldNotification.h>

@interface NFFieldNotificationECP1_0 : NFFieldNotification {

	unsigned char _odaRequired;
	unsigned _terminalMode;
	unsigned _terminalType;

}

@property (readonly) unsigned char odaRequired;              //@synthesize odaRequired=_odaRequired - In the implementation block
@property (readonly) unsigned terminalMode;                  //@synthesize terminalMode=_terminalMode - In the implementation block
@property (readonly) unsigned terminalType;                  //@synthesize terminalType=_terminalType - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned)terminalMode;
-(unsigned)terminalType;
-(unsigned char)odaRequired;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
@end
