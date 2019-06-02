/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:54 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ARKit/ARResultDataContext.h>

@class NSString;

@interface ARPoseContext : NSObject <ARResultDataContext> {

	long long _cameraPosition;
	/*^block*/id _cameraTransformCallback;

}

@property (assign,nonatomic) long long cameraPosition;              //@synthesize cameraPosition=_cameraPosition - In the implementation block
@property (nonatomic,copy) id cameraTransformCallback;              //@synthesize cameraTransformCallback=_cameraTransformCallback - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)imageData;
-(long long)cameraPosition;
-(id)resultDataOfClass:(Class)arg1 ;
-(id)cameraTransformCallback;
-(void)setCameraTransformCallback:(id)arg1 ;
-(void)setCameraPosition:(long long)arg1 ;
@end

