/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:52 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber, NSDate;

@interface SLFacebookRegistrationInfo : NSObject {

	NSString* _firstName;
	NSString* _lastName;
	NSString* _email;
	NSNumber* _phone;
	NSString* _password;
	NSString* _gender;
	NSDate* _birthday;

}

@property (nonatomic,retain) NSString * firstName;              //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,retain) NSString * lastName;               //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,retain) NSString * email;                  //@synthesize email=_email - In the implementation block
@property (nonatomic,retain) NSNumber * phone;                  //@synthesize phone=_phone - In the implementation block
@property (nonatomic,retain) NSString * password;               //@synthesize password=_password - In the implementation block
@property (nonatomic,retain) NSString * gender;                 //@synthesize gender=_gender - In the implementation block
@property (nonatomic,retain) NSDate * birthday;                 //@synthesize birthday=_birthday - In the implementation block
-(NSString *)email;
-(void)setEmail:(NSString *)arg1 ;
-(void)setBirthday:(NSDate *)arg1 ;
-(BOOL)hasAllRequiredValues;
-(NSDate *)birthday;
-(void)setPhone:(NSNumber *)arg1 ;
-(NSString *)firstName;
-(NSString *)lastName;
-(void)setGender:(NSString *)arg1 ;
-(NSString *)gender;
-(NSNumber *)phone;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(void)setPassword:(NSString *)arg1 ;
-(id)debugDescription;
-(NSString *)password;
@end

