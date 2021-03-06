/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:16 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <libobjc.A.dylib/FigSmartcamClassifier.h>

@class NSString;

@interface FigSmartcamClassifierEspresso : NSObject <FigSmartcamClassifier> {

	void* _ctx;
	void* _plan;
	SCD_Struct_Fi77* _net;
	SCD_Struct_Fi78* _espresso_output_buffer;
	int _processingType;
	OpaqueFigCaptureISPProcessingSessionRef _ispProcessingSession;
	SCD_Struct_Fi79 _classifierVersion;
	BOOL _useCVA;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)allocateResources;
-(BOOL)releaseResources;
-(SCD_Struct_Fi79)classifierVersion;
-(int)_prepareISPProcessingSession;
-(BOOL)classify:(CVBufferRef)arg1 confidences:(float*)arg2 ;
-(id)initWithProcessingType:(int)arg1 ispProcessingSession:(OpaqueFigCaptureISPProcessingSessionRef)arg2 ;
-(void)dealloc;
@end

