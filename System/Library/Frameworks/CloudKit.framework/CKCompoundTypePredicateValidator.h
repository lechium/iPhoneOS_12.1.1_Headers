/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:54 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKPredicateValidatorInstance.h>

@interface CKCompoundTypePredicateValidator : CKPredicateValidatorInstance {

	unsigned long long _type;

}

@property (assign,nonatomic) unsigned long long type;              //@synthesize type=_type - In the implementation block
-(BOOL)validate:(id)arg1 error:(id*)arg2 ;
-(id)CKPropertiesDescription;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(id)initWithType:(unsigned long long)arg1 ;
@end

