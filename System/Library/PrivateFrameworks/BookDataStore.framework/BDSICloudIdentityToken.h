/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:31 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <BookDataStore/BookDataStore-Structs.h>
@class NSString;

@interface BDSICloudIdentityToken : NSObject {

	NSString* _token;

}

@property (nonatomic,copy) NSString * token;              //@synthesize token=_token - In the implementation block
+(id)tokenForCurrentIdentityIfCloudKitEnabled;
-(id)initWithToken:(id)arg1 ;
-(id)initWithCurrentIdentity;
-(id)initFromArchive:(id)arg1 ;
-(id)_hashFor:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)token;
-(void)setToken:(NSString *)arg1 ;
@end
