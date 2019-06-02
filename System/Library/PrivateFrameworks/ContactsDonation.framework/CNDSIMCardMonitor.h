/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:05 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ContactsDonation.framework/ContactsDonation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsDonation/ContactsDonation-Structs.h>
#import <libobjc.A.dylib/CNDSIMCardMonitor.h>

@protocol CNDSIMCardMonitor <NSObject>
@required
-(id)addInfoChangeHandler:(/*^block*/id)arg1;

@end


@protocol CNDCoreTelephonyServices, CNCancelable, OS_dispatch_queue;
@class CoreTelephonyClient, CNReplaySubject, NSObject, NSString;

@interface CNDSIMCardMonitor : NSObject <CNDSIMCardMonitor> {

	CoreTelephonyClient* _coreTelephonyClient;
	id<CNDCoreTelephonyServices> _coreTelephonyServices;
	CNReplaySubject* _subject;
	id<CNCancelable> _subjectToken;
	CTServerConnectionRef _serverConnection;
	NSObject*<OS_dispatch_queue> _serverConnectionQueue;

}

@property (nonatomic,readonly) CoreTelephonyClient * coreTelephonyClient;                       //@synthesize coreTelephonyClient=_coreTelephonyClient - In the implementation block
@property (nonatomic,readonly) id<CNDCoreTelephonyServices> coreTelephonyServices;              //@synthesize coreTelephonyServices=_coreTelephonyServices - In the implementation block
@property (nonatomic,readonly) CNReplaySubject * subject;                                       //@synthesize subject=_subject - In the implementation block
@property (nonatomic,retain) id<CNCancelable> subjectToken;                                     //@synthesize subjectToken=_subjectToken - In the implementation block
@property (assign,nonatomic) CTServerConnectionRef serverConnection;                            //@synthesize serverConnection=_serverConnection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serverConnectionQueue;                //@synthesize serverConnectionQueue=_serverConnectionQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)os_log;
+(id)continuousPhoneNumberObservableWithCoreTelephonyClient:(id)arg1 services:(id)arg2 serverConnection:(CTServerConnectionRef)arg3 ;
+(id)phoneNumberChangedObservableWithCoreTelephonyServices:(id)arg1 serverConnection:(CTServerConnectionRef)arg2 ;
+(id)phoneNumberObservableWithCoreTelephonyClient:(id)arg1 ;
+(void)infoWithClient:(id)arg1 completion:(/*^block*/id)arg2 ;
+(id)infoWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithCoreTelephonyClient:(id)arg1 services:(id)arg2 ;
-(void)configureStateIfNecessary;
-(void)nts_configureConnectionIfNecessary;
-(void)nts_configureSubjectIfNecessary;
-(void)setServerConnectionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id<CNDCoreTelephonyServices>)coreTelephonyServices;
-(NSObject*<OS_dispatch_queue>)serverConnectionQueue;
-(id<CNCancelable>)subjectToken;
-(void)setSubjectToken:(id<CNCancelable>)arg1 ;
-(id)addInfoChangeHandler:(/*^block*/id)arg1 ;
-(CoreTelephonyClient *)coreTelephonyClient;
-(CTServerConnectionRef)serverConnection;
-(void)setServerConnection:(CTServerConnectionRef)arg1 ;
-(id)init;
-(void)dealloc;
-(CNReplaySubject *)subject;
@end

