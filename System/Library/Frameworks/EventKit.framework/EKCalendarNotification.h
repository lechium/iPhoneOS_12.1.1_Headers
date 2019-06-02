/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <libobjc.A.dylib/EKIdentityProtocol.h>

@class NSString, NSURL, EKObjectID;

@interface EKCalendarNotification : NSObject <EKIdentityProtocol> {

	long long _type;
	NSString* _title;
	NSString* _name;
	NSString* _emailAddress;
	NSString* _phoneNumber;
	NSURL* _URL;
	EKObjectID* _objectID;
	CGColorRef _dotColor;
	BOOL _hiddenFromNotificationCenter;
	BOOL _alerted;
	BOOL _couldBeJunk;
	NSString* _firstName;
	NSString* _lastName;

}

@property (assign,nonatomic) long long type;                                 //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * title;                               //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * firstName;                           //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,retain) NSString * lastName;                            //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,retain) NSString * emailAddress;                        //@synthesize emailAddress=_emailAddress - In the implementation block
@property (nonatomic,retain) NSString * phoneNumber;                         //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,retain) NSURL * URL;                                    //@synthesize URL=_URL - In the implementation block
@property (nonatomic,retain) EKObjectID * objectID;                          //@synthesize objectID=_objectID - In the implementation block
@property (assign,nonatomic) CGColorRef dotColor;                            //@synthesize dotColor=_dotColor - In the implementation block
@property (assign,nonatomic) BOOL hiddenFromNotificationCenter;              //@synthesize hiddenFromNotificationCenter=_hiddenFromNotificationCenter - In the implementation block
@property (assign,nonatomic) BOOL alerted;                                   //@synthesize alerted=_alerted - In the implementation block
@property (nonatomic,readonly) BOOL needsAlert; 
@property (assign,nonatomic) BOOL couldBeJunk;                               //@synthesize couldBeJunk=_couldBeJunk - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPhoneNumber:(NSString *)arg1 ;
-(BOOL)alerted;
-(void)setHiddenFromNotificationCenter:(BOOL)arg1 ;
-(void)setAlerted:(BOOL)arg1 ;
-(void)setCouldBeJunk:(BOOL)arg1 ;
-(BOOL)hiddenFromNotificationCenter;
-(BOOL)needsAlert;
-(void)setEmailAddress:(NSString *)arg1 ;
-(void)setDotColor:(CGColorRef)arg1 ;
-(BOOL)couldBeJunk;
-(NSString *)emailAddress;
-(void)setObjectID:(EKObjectID *)arg1 ;
-(EKObjectID *)objectID;
-(NSString *)firstName;
-(NSString *)lastName;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(CGColorRef)dotColor;
-(void)dealloc;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(id)initWithType:(long long)arg1 ;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(NSString *)phoneNumber;
@end

