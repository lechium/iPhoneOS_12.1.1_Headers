/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:56 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SplashBoard/SplashBoard-Structs.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBSDisplayConfiguration, NSString;

@interface XBLaunchStateRequest : NSObject <BSXPCCoding, NSCopying> {

	FBSDisplayConfiguration* _displayConfiguration;
	NSString* _groupID;
	long long _interfaceOrientation;
	unsigned long long _statusBarState;
	NSString* _urlSchemeName;
	NSString* _launchInterfaceIdentifier;
	CGSize _referenceSize;
	CGSize _naturalSize;

}

@property (nonatomic,retain) FBSDisplayConfiguration * displayConfiguration;              //@synthesize displayConfiguration=_displayConfiguration - In the implementation block
@property (nonatomic,copy) NSString * groupID;                                            //@synthesize groupID=_groupID - In the implementation block
@property (assign,nonatomic) CGSize referenceSize;                                        //@synthesize referenceSize=_referenceSize - In the implementation block
@property (assign,nonatomic) CGSize naturalSize;                                          //@synthesize naturalSize=_naturalSize - In the implementation block
@property (assign,nonatomic) long long interfaceOrientation;                              //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
@property (assign,nonatomic) unsigned long long statusBarState;                           //@synthesize statusBarState=_statusBarState - In the implementation block
@property (nonatomic,copy) NSString * urlSchemeName;                                      //@synthesize urlSchemeName=_urlSchemeName - In the implementation block
@property (nonatomic,copy) NSString * launchInterfaceIdentifier;                          //@synthesize launchInterfaceIdentifier=_launchInterfaceIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGSize)referenceSize;
-(void)setReferenceSize:(CGSize)arg1 ;
-(CGSize)naturalSize;
-(NSString *)groupID;
-(void)setGroupID:(NSString *)arg1 ;
-(void)setNaturalSize:(CGSize)arg1 ;
-(unsigned long long)statusBarState;
-(NSString *)urlSchemeName;
-(NSString *)launchInterfaceIdentifier;
-(void)setStatusBarState:(unsigned long long)arg1 ;
-(void)setUrlSchemeName:(NSString *)arg1 ;
-(void)setLaunchInterfaceIdentifier:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)interfaceOrientation;
-(FBSDisplayConfiguration *)displayConfiguration;
-(void)setInterfaceOrientation:(long long)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(void)setDisplayConfiguration:(FBSDisplayConfiguration *)arg1 ;
@end

