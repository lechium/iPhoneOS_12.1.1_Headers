/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:53 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <AppStoreDaemon/ASDRequestOptions.h>

@interface ASDMigrationRequestOptions : ASDRequestOptions {

	unsigned long long _migrationType;

}

@property (nonatomic,readonly) unsigned long long migrationType;              //@synthesize migrationType=_migrationType - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)migrationType;
-(id)initWithMigrationType:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

