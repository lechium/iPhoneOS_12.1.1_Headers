/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:49 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PLPhotoEditPersistenceManager : NSObject
-(id)_allConverterClasses;
-(BOOL)canInterpretDataWithFormatIdentifier:(id)arg1 formatVersion:(id)arg2 ;
-(id)debugDescriptionForPhotoEditData:(id)arg1 formatIdentifier:(id)arg2 formatVersion:(id)arg3 ;
-(id)_allImporterClasses;
-(Class)_latestExporterClass;
-(id)debugDescriptionForAdjustmentData:(id)arg1 ;
-(id)dataFromPhotoEditModel:(id)arg1 outFormatIdentifier:(id*)arg2 outFormatVersion:(id*)arg3 exportProperties:(id)arg4 ;
-(BOOL)loadPhotoEditData:(id)arg1 formatIdentifier:(id)arg2 formatVersion:(id)arg3 intoModel:(id)arg4 importProperties:(id)arg5 ;
@end
