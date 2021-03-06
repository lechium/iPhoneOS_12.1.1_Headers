/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:47 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PLPhotoAnalysisPersonSuggestion : NSObject {

	BOOL _confirmed;
	long long _keyFaceClusterSequenceNumber;
	NSString* _keyFaceLocalIdentifier;
	NSString* _personLocalIdentifier;
	long long _personFaceCount;

}

@property (nonatomic,readonly) long long keyFaceClusterSequenceNumber;              //@synthesize keyFaceClusterSequenceNumber=_keyFaceClusterSequenceNumber - In the implementation block
@property (nonatomic,copy,readonly) NSString * keyFaceLocalIdentifier;              //@synthesize keyFaceLocalIdentifier=_keyFaceLocalIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * personLocalIdentifier;               //@synthesize personLocalIdentifier=_personLocalIdentifier - In the implementation block
@property (nonatomic,readonly) long long personFaceCount;                           //@synthesize personFaceCount=_personFaceCount - In the implementation block
@property (nonatomic,readonly) BOOL confirmed;                                      //@synthesize confirmed=_confirmed - In the implementation block
-(id)suggestionDictionaryRepresentation;
-(id)initWithSuggestionDictionary:(id)arg1 ;
-(long long)keyFaceClusterSequenceNumber;
-(NSString *)keyFaceLocalIdentifier;
-(long long)personFaceCount;
-(NSString *)personLocalIdentifier;
-(BOOL)confirmed;
-(id)description;
@end

