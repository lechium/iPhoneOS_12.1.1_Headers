/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:14 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNPersonsModel.h>
#import <libobjc.A.dylib/VNPersonsModelDataDelegate.h>

@class VNPersonsModelData, VNPersonsModelFaceModel, NSString;

@interface VNMutablePersonsModel : VNPersonsModel <VNPersonsModelDataDelegate> {

	VNPersonsModelData* _modelData;
	VNPersonsModelFaceModel* _faceModel_DO_NOT_ACCESS_DIRECTLY;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_version1ModelWithObjects:(id)arg1 error:(id*)arg2 ;
+(id)newModelFromVersion:(unsigned long long)arg1 objects:(id)arg2 error:(id*)arg3 ;
+(id)supportedWriteVersions;
-(id)_lastModificationDate;
-(BOOL)_writeVersion1ConfigurationToOutputStream:(id)arg1 md5Context:(CC_MD5state_st*)arg2 error:(id*)arg3 ;
-(BOOL)_writeVersion1InformationToOutputStream:(id)arg1 md5Context:(CC_MD5state_st*)arg2 error:(id*)arg3 ;
-(id)upToDateFaceModelWithCanceller:(id)arg1 error:(id*)arg2 ;
-(BOOL)_writeReadOnlyVersion:(unsigned long long)arg1 toOutputStream:(id)arg2 options:(id)arg3 md5Context:(CC_MD5state_st*)arg4 error:(id*)arg5 ;
-(BOOL)addFaceObservations:(id)arg1 toPersonWithUniqueIdentifier:(id)arg2 error:(id*)arg3 ;
-(BOOL)_getModelWritingImplementation:(/*function pointer*/void**)arg1 selector:(SEL*)arg2 forVersion:(unsigned long long)arg3 readOnly:(BOOL)arg4 ;
-(BOOL)_getModelWritingImplementation:(/*function pointer*/void**)arg1 selector:(SEL*)arg2 version:(unsigned long long*)arg3 forOptions:(id)arg4 ;
-(BOOL)writeToStream:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(BOOL)_writeToUnopenedStream:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(BOOL)removeFaceObservations:(id)arg1 fromPersonWithUniqueIdentifier:(id)arg2 error:(id*)arg3 ;
-(BOOL)removeAllFaceObservationsFromPersonWithUniqueIdentifier:(id)arg1 error:(id*)arg2 ;
-(BOOL)removePersonWithUniqueIdentifier:(id)arg1 error:(id*)arg2 ;
-(void)_modelWasModified;
-(void)personsModelDataWasModified:(id)arg1 ;
-(BOOL)writeVersion1ToOutputStream:(id)arg1 options:(id)arg2 md5Context:(CC_MD5state_st*)arg3 error:(id*)arg4 ;
-(BOOL)writeReadOnlyVersion1ToOutputStream:(id)arg1 options:(id)arg2 md5Context:(CC_MD5state_st*)arg3 error:(id*)arg4 ;
-(id)dataWithOptions:(id)arg1 error:(id*)arg2 ;
-(NSString *)description;
-(id)initWithConfiguration:(id)arg1 ;
-(BOOL)writeToURL:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
@end

