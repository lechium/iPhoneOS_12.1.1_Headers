/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:47 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FCCKProtocolTranslator : NSObject
+(id)sharedInstance;
-(int)fieldValueTypeFromObject:(id)arg1 ;
-(id)fieldValueOfType:(int)arg1 withObject:(id)arg2 ;
-(id)pRecordIdentifierFromRecordID:(id)arg1 ;
-(id)pReferenceFromReference:(id)arg1 error:(id*)arg2 ;
-(id)fieldValueFromObject:(id)arg1 ;
-(id)objectRepresentationFromFieldValue:(id)arg1 ;
-(id)pQueryFromQuery:(id)arg1 error:(id*)arg2 ;
-(id)recordFromPRecord:(id)arg1 ;
-(id)pUserIdentifierFromUserRecordName:(id)arg1 ;
-(id)pRecordIdentifierFromUserRecordName:(id)arg1 ;
-(id)pRecordZoneIdentifierFromRecordZoneID:(id)arg1 ;
-(id)recordIDFromPRecordIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)referenceFromPReference:(id)arg1 error:(id*)arg2 ;
@end

