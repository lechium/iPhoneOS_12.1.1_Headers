/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:35 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface HDJournalEntry : NSObject <NSSecureCoding> {

	BOOL _requiresSecureDelete;

}

@property (assign,nonatomic) BOOL requiresSecureDelete;              //@synthesize requiresSecureDelete=_requiresSecureDelete - In the implementation block
+(void)applyEntries:(id)arg1 withProfile:(id)arg2 ;
+(BOOL)supportsSecureCoding;
-(BOOL)requiresSecureDelete;
-(void)setRequiresSecureDelete:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

