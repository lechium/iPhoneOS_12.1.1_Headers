/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:11 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNCardGroupItem.h>

@protocol CNPropertyGroupItemDelegate;
@class CNLabeledValue, CNCardPropertyGroup, NSString, CNContact, CNContactStore, CNUIContactsEnvironment, CNMutableContact, CNContactProperty, NSArray, NSURL;

@interface CNPropertyGroupItem : CNCardGroupItem {

	BOOL _allowsIMessage;
	BOOL _allowsPhone;
	BOOL _allowsTTY;
	BOOL _allowsEmail;
	CNLabeledValue* _labeledValue;
	CNCardPropertyGroup* _group;
	NSString* _property;
	CNContact* _contact;
	CNContactStore* _contactStore;
	id<CNPropertyGroupItemDelegate> _delegate;
	CNLabeledValue* _originalLabeledValue;
	CNUIContactsEnvironment* _environment;
	unsigned long long _policyFlags;

}

@property (nonatomic,retain) NSString * property;                                          //@synthesize property=_property - In the implementation block
@property (nonatomic,retain) CNLabeledValue * labeledValue;                                //@synthesize labeledValue=_labeledValue - In the implementation block
@property (nonatomic,retain) CNLabeledValue * originalLabeledValue;                        //@synthesize originalLabeledValue=_originalLabeledValue - In the implementation block
@property (nonatomic,retain) CNContact * contact;                                          //@synthesize contact=_contact - In the implementation block
@property (nonatomic,readonly) CNMutableContact * mutableContact; 
@property (nonatomic,readonly) CNUIContactsEnvironment * environment;                      //@synthesize environment=_environment - In the implementation block
@property (assign,nonatomic) unsigned long long policyFlags;                               //@synthesize policyFlags=_policyFlags - In the implementation block
@property (nonatomic,readonly) CNContactProperty * contactProperty; 
@property (nonatomic,__weak,readonly) CNCardPropertyGroup * group;                         //@synthesize group=_group - In the implementation block
@property (nonatomic,readonly) CNContactStore * contactStore;                              //@synthesize contactStore=_contactStore - In the implementation block
@property (assign,nonatomic,__weak) id<CNPropertyGroupItemDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL allowsIMessage;                                          //@synthesize allowsIMessage=_allowsIMessage - In the implementation block
@property (assign,nonatomic) BOOL allowsPhone;                                             //@synthesize allowsPhone=_allowsPhone - In the implementation block
@property (assign,nonatomic) BOOL allowsTTY;                                               //@synthesize allowsTTY=_allowsTTY - In the implementation block
@property (assign,nonatomic) BOOL allowsEmail;                                             //@synthesize allowsEmail=_allowsEmail - In the implementation block
@property (nonatomic,readonly) id normalizedValue; 
@property (nonatomic,readonly) NSString * displayValue; 
@property (nonatomic,readonly) NSString * displayLabel; 
@property (nonatomic,readonly) NSString * editingStringValue; 
@property (nonatomic,readonly) NSString * placeholderString; 
@property (nonatomic,__weak,readonly) NSArray * supportedLabels; 
@property (nonatomic,readonly) NSURL * defaultActionURL; 
@property (nonatomic,readonly) BOOL modified; 
@property (getter=isSuggested,nonatomic,readonly) BOOL suggested; 
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
@property (getter=isReadonly,nonatomic,readonly) BOOL readonly; 
@property (nonatomic,readonly) BOOL canRemove; 
@property (getter=isFavorite,nonatomic,readonly) BOOL favorite; 
+(id)propertyGroupItemWithLabeledValue:(id)arg1 group:(id)arg2 contact:(id)arg3 ;
+(id)propertyGroupItemWithLabel:(id)arg1 group:(id)arg2 contact:(id)arg3 ;
+(id)emptyValueForLabel:(id)arg1 ;
+(Class)classForProperty:(id)arg1 ;
+(id)propertyGroupItemWithLabeledValue:(id)arg1 group:(id)arg2 contact:(id)arg3 environment:(id)arg4 ;
+(id)propertyGroupItemWithLabel:(id)arg1 group:(id)arg2 contact:(id)arg3 environment:(id)arg4 ;
+(id)newPropertyGroupItemForProperty:(id)arg1 ;
+(void)deleteCoreRecentsEntriesMatchingProperty:(id)arg1 recentsManager:(id)arg2 ;
-(BOOL)isReadonly;
-(NSURL *)defaultActionURL;
-(void)setAllowsPhone:(BOOL)arg1 ;
-(BOOL)modified;
-(void)updateLabeledValueWithValue:(id)arg1 ;
-(void)mergeItem:(id)arg1 ;
-(BOOL)isEquivalentToItem:(id)arg1 whenEditing:(BOOL)arg2 ;
-(void)saveChangesImmediately:(BOOL)arg1 ;
-(CNMutableContact *)mutableContact;
-(id)contactViewCache;
-(void)updateLabeledValueWithLabel:(id)arg1 ;
-(BOOL)canRemove;
-(void)confirmSuggestion;
-(void)setAllowsIMessage:(BOOL)arg1 ;
-(void)setAllowsEmail:(BOOL)arg1 ;
-(void)setAllowsTTY:(BOOL)arg1 ;
-(id)normalizedValue;
-(BOOL)isValidValue:(id)arg1 ;
-(id)replacementForInvalidValue:(id)arg1 ;
-(NSArray *)supportedLabels;
-(NSString *)editingStringValue;
-(id)displayStringForValue:(id)arg1 ;
-(BOOL)allowsEmail;
-(BOOL)allowsIMessage;
-(BOOL)isEquivalentToItem:(id)arg1 ;
-(id)bestValue:(id)arg1 ;
-(void)rejectSuggestion;
-(id)valueForDisplayString:(id)arg1 ;
-(id)initWithLabeledValue:(id)arg1 group:(id)arg2 contact:(id)arg3 environment:(id)arg4 ;
-(id)initWithLabel:(id)arg1 group:(id)arg2 contact:(id)arg3 environment:(id)arg4 ;
-(unsigned long long)policyFlags;
-(void)setPolicyFlags:(unsigned long long)arg1 ;
-(BOOL)isFavoriteOfActionType:(id)arg1 bundleIdentifier:(id)arg2 ;
-(id)bestLabel:(id)arg1 ;
-(id)updateWithLabel:(id)arg1 value:(id)arg2 ;
-(CNLabeledValue *)originalLabeledValue;
-(void)_removeSuggestion;
-(BOOL)isValidIdentifier:(id)arg1 ;
-(BOOL)shouldCreateNewMeContactToSaveChangesTo;
-(int)anyContactLegacyIdentifier;
-(int)labeledValueMultiValueIdentifierForChosenSourceContact;
-(BOOL)allowsPhone;
-(BOOL)allowsTTY;
-(void)setOriginalLabeledValue:(CNLabeledValue *)arg1 ;
-(void)setLabeledValue:(CNLabeledValue *)arg1 ;
-(void)setProperty:(NSString *)arg1 ;
-(void)setContact:(CNContact *)arg1 ;
-(BOOL)isFavorite;
-(BOOL)isSuggested;
-(CNContactStore *)contactStore;
-(CNContact *)contact;
-(CNLabeledValue *)labeledValue;
-(NSString *)placeholderString;
-(NSString *)displayLabel;
-(NSString *)property;
-(id)initWithGroup:(id)arg1 ;
-(CNContactProperty *)contactProperty;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)setDelegate:(id<CNPropertyGroupItemDelegate>)arg1 ;
-(id<CNPropertyGroupItemDelegate>)delegate;
-(CNCardPropertyGroup *)group;
-(BOOL)isEmpty;
-(CNUIContactsEnvironment *)environment;
-(NSString *)displayValue;
@end
