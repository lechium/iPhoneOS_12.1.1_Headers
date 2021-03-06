/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:09 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HMDAccessorySymptomsDelegate;
@class NSString, NSSet;

@interface HMDSymptomContainer : NSObject {

	NSString* _idsIdentifier;
	id<HMDAccessorySymptomsDelegate> _delegate;
	NSSet* _broadcastedSymptoms;
	NSSet* _localSymptoms;

}

@property (nonatomic,copy,readonly) NSString * idsIdentifier;                               //@synthesize idsIdentifier=_idsIdentifier - In the implementation block
@property (assign,nonatomic,__weak) id<HMDAccessorySymptomsDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSSet * broadcastedSymptoms;                                     //@synthesize broadcastedSymptoms=_broadcastedSymptoms - In the implementation block
@property (nonatomic,copy) NSSet * localSymptoms;                                           //@synthesize localSymptoms=_localSymptoms - In the implementation block
-(NSString *)idsIdentifier;
-(NSSet *)localSymptoms;
-(void)setLocalSymptoms:(NSSet *)arg1 ;
-(id)initWithIDSIdentifier:(id)arg1 ;
-(NSSet *)broadcastedSymptoms;
-(void)setBroadcastedSymptoms:(NSSet *)arg1 ;
-(void)setDelegate:(id<HMDAccessorySymptomsDelegate>)arg1 ;
-(id<HMDAccessorySymptomsDelegate>)delegate;
@end

