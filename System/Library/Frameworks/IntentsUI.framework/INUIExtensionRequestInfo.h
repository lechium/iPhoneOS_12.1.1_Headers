/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:34 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/IntentsUI.framework/IntentsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IntentsUI/IntentsUI-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class INInteraction;

@interface INUIExtensionRequestInfo : NSObject <NSSecureCoding, NSCopying> {

	BOOL _requiresUserConsent;
	INInteraction* _interaction;

}

@property (nonatomic,readonly) INInteraction * interaction;              //@synthesize interaction=_interaction - In the implementation block
@property (assign,nonatomic) BOOL requiresUserConsent;                   //@synthesize requiresUserConsent=_requiresUserConsent - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setRequiresUserConsent:(BOOL)arg1 ;
-(BOOL)requiresUserConsent;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithInteraction:(id)arg1 ;
-(INInteraction *)interaction;
@end
