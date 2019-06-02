/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:20 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKRemoteAssetManifestItem.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface PKRemoteCloudStoreAssetManifestItem : PKRemoteAssetManifestItem <NSSecureCoding>

@property (nonatomic,readonly) NSString * recordName; 
+(BOOL)supportsSecureCoding;
-(void)downloadAssetWithCloudStoreCoordinatorDelegate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)itemType;
-(NSString *)recordName;
@end
