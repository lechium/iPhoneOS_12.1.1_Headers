/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:35 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CVAPortraitGenericRequest.h>

@protocol CVABackgroundRequest, CVALightRequest, CVAPostProcessingRequest;
@class NSString;

@interface CVAPortraitGenericRequestImpl : NSObject <CVAPortraitGenericRequest> {

	BOOL _isTmpConfig;
	id<CVABackgroundRequest> _background;
	id<CVALightRequest> _light;
	id<CVAPostProcessingRequest> _post;

}

@property (retain) id<CVABackgroundRequest> background;              //@synthesize background=_background - In the implementation block
@property (retain) id<CVALightRequest> light;                        //@synthesize light=_light - In the implementation block
@property (retain) id<CVAPostProcessingRequest> post;                //@synthesize post=_post - In the implementation block
@property (assign) BOOL isTmpConfig;                                 //@synthesize isTmpConfig=_isTmpConfig - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<CVALightRequest>)light;
-(void)setLight:(id<CVALightRequest>)arg1 ;
-(id<CVAPostProcessingRequest>)post;
-(void)setPost:(id<CVAPostProcessingRequest>)arg1 ;
-(BOOL)isTmpConfig;
-(void)setIsTmpConfig:(BOOL)arg1 ;
-(void)setBackground:(id<CVABackgroundRequest>)arg1 ;
-(id<CVABackgroundRequest>)background;
@end

