/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:19 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/IntentsCore.framework/IntentsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface INCLocalExtensionRegistry : NSObject {

	NSMutableDictionary* _localExtensionsByIdentifier;

}
+(id)sharedInstance;
-(void)registerLocalExtension:(id)arg1 ;
-(void)deregisterLocalExtension:(id)arg1 ;
-(id)localExtensions;
-(id)localExtensionForIdentifier:(id)arg1 ;
-(id)init;
@end

