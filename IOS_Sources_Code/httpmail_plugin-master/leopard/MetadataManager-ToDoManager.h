/*
 *     Generated by class-dump 3.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2005 by Steve Nygard.
 */

#import <Message/MetadataManager.h>

@interface MetadataManager (ToDoManager)
- (id)newToDoInAccount:(id)fp8;
- (id)newToDoWithTitle:(id)fp8 inAccount:(id)fp12;
- (id)newCalendarWithTitle:(id)fp8 calendarID:(id)fp12 inAccount:(id)fp16;
- (id)todoWithID:(id)fp8;
- (id)calendarWithTitle:(id)fp8 account:(id)fp12;
- (id)todoCalendarWithID:(id)fp8 title:(id)fp12;
- (id)todosByIDForDocumentID:(id)fp8;
- (id)todosByIDForDocumentID:(id)fp8 byPreviousID:(id *)fp12;
- (id)allToDosForDocumentID:(id)fp8;
- (id)allToDosForNote:(id)fp8;
- (id)allToDosForMessage:(id)fp8;
- (BOOL)hasToDoWithIDBeenDeleted:(id)fp8;
- (id)allDeletedToDoIDsForDocumentID:(id)fp8;
- (void)_loadAllToDosForMailboxUid:(id)fp8;
- (void)loadAllToDosForMailboxUid:(id)fp8;
- (void)_setMailboxIDForMailboxUid:(id)fp8 inObject:(id)fp12;
- (void)setMailboxIDForMailboxUid:(id)fp8 inObject:(id)fp12;
- (void)addToDos:(id)fp8;
- (void)deleteToDos:(id)fp8;
- (void)deleteLocalToDos:(id)fp8;
- (void)updateToDos:(id)fp8;
- (void)addCalendar:(id)fp8;
- (id)copyToDos:(id)fp8 destinationAccount:(id)fp12 newDocumentIDsByOld:(id)fp16;
- (void)_moveToDos:(id)fp8 toAccount:(id)fp12;
- (void)_removeAllToDoObjectsForAccount:(id)fp8 originalMailboxUid:(id)fp12 moveToDosToLocalAccount:(id)fp16;
- (void)_makeLocalToDosOfAllToDosForAccount:(id)fp8 originalMailboxUid:(id)fp12;
- (void)removeAllToDoObjectsForAccount:(id)fp8 moveToDosToLocalAccount:(BOOL)fp12;
- (void)_disableAllToDoObjectsForAccount:(id)fp8;
- (void)disableAllToDoObjectsForAccount:(id)fp8;
- (BOOL)_cacheToDoObjectsFromDisabledAccount:(id)fp8 group:(id *)fp12 calendars:(id *)fp16 todos:(id *)fp20;
- (void)_enableAllToDoObjectsForAccount:(id)fp8;
- (void)enableAllToDoObjectsForAccount:(id)fp8;
- (void)updateToDoWithID:(id)fp8 toRemoteID:(id)fp12;
- (void)registerSearchStore:(id)fp8;
- (void)unregisterSearchStore:(id)fp8;
- (void)updateSearchStoreForMailboxUid:(id)fp8;
- (void)updateSearchStoresInArray:(id)fp8;
- (id)findOrCreateCalendarWithTitle:(id)fp8 calendarID:(id)fp12 account:(id)fp16;
- (id)allUniqueCalendarNames;
- (id)allCalendars;
- (id)allCalendarsInAccount:(id)fp8;
- (id)editableCalendarsByIDForToDos:(id)fp8;
- (void)setAccountAndCalendarInDecodedToDo:(id)fp8 mailboxID:(unsigned int)fp12;
@end

