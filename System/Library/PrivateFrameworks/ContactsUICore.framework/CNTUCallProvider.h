/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:08 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNTUCallProvider.h>
@class NSString, NSSet;


@protocol CNTUCallProvider <NSObject>
@property (nonatomic,copy,readonly) NSString * localizedName; 
@property (nonatomic,copy,readonly) NSString * bundleIdentifier; 
@property (nonatomic,readonly) BOOL supportsAudio; 
@property (nonatomic,readonly) BOOL supportsVideo; 
@property (nonatomic,copy,readonly) NSSet * supportedHandleTypes; 
@required
-(id)dialRequestForHandle:(id)arg1 contact:(id)arg2 video:(BOOL)arg3;
-(BOOL)supportsAudio;
-(BOOL)supportsVideo;
-(NSSet *)supportedHandleTypes;
-(NSString *)bundleIdentifier;
-(NSString *)localizedName;

@end


@class NSString, NSSet, TUCallProvider;

@interface CNTUCallProvider : NSObject <CNTUCallProvider> {

	TUCallProvider* _callProvider;

}

@property (nonatomic,copy) TUCallProvider * callProvider;                      //@synthesize callProvider=_callProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * localizedName; 
@property (nonatomic,copy,readonly) NSString * bundleIdentifier; 
@property (nonatomic,readonly) BOOL supportsAudio; 
@property (nonatomic,readonly) BOOL supportsVideo; 
@property (nonatomic,copy,readonly) NSSet * supportedHandleTypes; 
-(TUCallProvider *)callProvider;
-(id)dialRequestForHandle:(id)arg1 contact:(id)arg2 video:(BOOL)arg3 ;
-(id)initWithCallProvider:(id)arg1 ;
-(BOOL)supportsAudio;
-(BOOL)supportsVideo;
-(void)setCallProvider:(TUCallProvider *)arg1 ;
-(NSSet *)supportedHandleTypes;
-(NSString *)bundleIdentifier;
-(NSString *)localizedName;
@end

