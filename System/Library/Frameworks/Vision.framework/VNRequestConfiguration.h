/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:14 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class VNProcessingDevice;

@interface VNRequestConfiguration : NSObject <NSCopying> {

	BOOL _preferBackgroundProcessing;
	Class _requestClass;
	unsigned long long _resolvedRevision;
	unsigned long long _detectionLevel;
	VNProcessingDevice* _processingDevice;
	unsigned long long _metalContextPriority;
	unsigned long long _modelFileBackingStore;

}

@property (nonatomic,readonly) Class requestClass;                                  //@synthesize requestClass=_requestClass - In the implementation block
@property (assign,nonatomic) unsigned long long resolvedRevision;                   //@synthesize resolvedRevision=_resolvedRevision - In the implementation block
@property (assign,nonatomic) unsigned long long detectionLevel;                     //@synthesize detectionLevel=_detectionLevel - In the implementation block
@property (nonatomic,retain) VNProcessingDevice * processingDevice;                 //@synthesize processingDevice=_processingDevice - In the implementation block
@property (assign,nonatomic) unsigned long long metalContextPriority;               //@synthesize metalContextPriority=_metalContextPriority - In the implementation block
@property (assign,nonatomic) BOOL preferBackgroundProcessing;                       //@synthesize preferBackgroundProcessing=_preferBackgroundProcessing - In the implementation block
@property (assign,nonatomic) unsigned long long modelFileBackingStore;              //@synthesize modelFileBackingStore=_modelFileBackingStore - In the implementation block
-(void)setModelFileBackingStore:(unsigned long long)arg1 ;
-(void)setProcessingDevice:(VNProcessingDevice *)arg1 ;
-(VNProcessingDevice *)processingDevice;
-(void)setDetectionLevel:(unsigned long long)arg1 ;
-(id)initWithRequestClass:(Class)arg1 ;
-(unsigned long long)resolvedRevision;
-(unsigned long long)modelFileBackingStore;
-(unsigned long long)detectionLevel;
-(BOOL)preferBackgroundProcessing;
-(void)setPreferBackgroundProcessing:(BOOL)arg1 ;
-(void)setMetalContextPriority:(unsigned long long)arg1 ;
-(void)setResolvedRevision:(unsigned long long)arg1 ;
-(unsigned long long)metalContextPriority;
-(Class)requestClass;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

