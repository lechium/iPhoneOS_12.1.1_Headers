/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:41 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/FMClient.framework/FMClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface FMClient.AuthenticationCredential : NSObject <NSSecureCoding> {

	 authToken;
	 personId;
	 hostName;

}

@property (readonly,nonatomic) NSString * authToken; 
@property (readonly,nonatomic) NSString * personId; 
@property (readonly,nonatomic) NSString * hostName; 
+(BOOL)supportsSecureCoding;
-(NSString *)hostName;
-(NSString *)authToken;
-(NSString *)personId;
-(id)initWithAuthToken:(id)arg1 personId:(id)arg2 hostName:(id)arg3 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

