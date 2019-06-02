/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:08 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDBackingStoreModelObject.h>

@class HMFSoftwareVersion, NSNumber, HMSoftwareUpdateDocumentationMetadata;

@interface HMDSoftwareUpdateModel : HMDBackingStoreModelObject

@property (nonatomic,retain) HMFSoftwareVersion * softwareVersion; 
@property (nonatomic,retain) NSNumber * state; 
@property (nonatomic,retain) NSNumber * downloadSize; 
@property (nonatomic,retain) HMSoftwareUpdateDocumentationMetadata * documentationMetadata; 
+(id)properties;
@end

