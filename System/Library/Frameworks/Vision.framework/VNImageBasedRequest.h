/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:15 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNRequest.h>
#import <libobjc.A.dylib/VNFaceObservationAcceptingInternal.h>

@class NSString, NSArray;

@interface VNImageBasedRequest : VNRequest <VNFaceObservationAcceptingInternal>

@property (assign,nonatomic) CGRect regionOfInterest; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSArray * inputFaceObservations; 
+(void)recordDefaultOptionsInDictionary:(id)arg1 ;
+(Class)configurationClass;
-(void)setInputFaceObservations:(NSArray *)arg1 ;
-(NSArray *)inputFaceObservations;
-(void)applyConfigurationOfRequest:(id)arg1 ;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1 ;
-(CGRect)regionOfInterestPixelRectForWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 ;
-(id)initWithName:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(CGRect)regionOfInterest;
-(BOOL)getOptionalValidatedInputFaceObservations:(id*)arg1 clippedToRegionOfInterest:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)validateConfigurationAndReturnError:(id*)arg1 ;
-(BOOL)isFullCoverageRegionOfInterest;
-(id)_faceObservationsForRegionOfInterestContainingFaceObservations:(id)arg1 ;
-(id)validatedInputFaceObservationsClippedToRegionOfInterest:(BOOL)arg1 error:(id*)arg2 ;
-(CGRect)regionOfInterestNonIntegralPixelRectForWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 ;
-(void)setRegionOfInterest:(CGRect)arg1 ;
@end

