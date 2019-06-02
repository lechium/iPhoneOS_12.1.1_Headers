/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:52 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <SecurityFoundation/_SFPublicKey.h>

@class _SFECKeySpecifier;

@interface _SFECPublicKey : _SFPublicKey {

	id _ecPublicKeyInternal;

}

@property (nonatomic,copy,readonly) _SFECKeySpecifier * keySpecifier; 
+(id)_specifierForSecKey:(SecKeyRef)arg1 ;
+(id)_secKeyCreationAttributesForSpecifier:(id)arg1 ;
-(id)performWithCCKey:(/*^block*/id)arg1 ;
@end
