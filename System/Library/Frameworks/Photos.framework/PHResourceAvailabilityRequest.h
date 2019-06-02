/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:02 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHAvailabilityRequest.h>

@protocol PLResourceIdentity;
@interface PHResourceAvailabilityRequest : PHAvailabilityRequest {

	id<PLResourceIdentity> _resourceIdentity;

}

@property (nonatomic,readonly) id<PLResourceIdentity> resourceIdentity;              //@synthesize resourceIdentity=_resourceIdentity - In the implementation block
+(id)_convertResourceIdentityToPlistDictionary:(id)arg1 ;
-(id)initWithPlistDictionary:(id)arg1 ;
-(id)plistDictionary;
-(id)initWithAssetObjectID:(id)arg1 resourceIdentity:(id)arg2 ;
-(id<PLResourceIdentity>)resourceIdentity;
@end
