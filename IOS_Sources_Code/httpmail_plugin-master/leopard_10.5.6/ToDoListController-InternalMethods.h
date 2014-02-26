/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "ToDoListController.h"

@interface ToDoListController (InternalMethods)
- (void)_initCalendarMenu;
- (void)_initPriorityMenu;
- (void)_updateSelection;
- (void)_updateColumnInfo;
- (id)_selectedCalendars;
- (id)_disabledGrayTextForNoPriority;
- (id)undoManager;
- (void)deleteToDosWithUndo:(id)fp8;
- (void)addAndSelectToDosWithUndo:(id)fp8;
- (void)_setDetailsWindowRelatedColumnsEditable:(BOOL)fp8;
- (BOOL)selectNextToDoMovingDownward:(BOOL)fp8;
- (void)copyToDos:(id)fp8 toPasteboard:(id)fp12;
- (unsigned int)addToDosFromPasteboard:(id)fp8;
- (void)_setColumnWithTag:(unsigned int)fp8 visible:(BOOL)fp12;
- (id)_sortDescriptorsFromArchivedData:(id)fp8;
- (BOOL)_todosHaveAlarms:(id)fp8;
- (BOOL)_dueDateEnabledForToDos:(id)fp8;
- (void)_applyDateFromUserSheetWithMessage:(id)fp8 forToDos:(id)fp12 applyDateSelector:(SEL)fp16;
- (void)_changeDueDate:(id)fp8 forToDos:(id)fp12;
- (void)_changeCompletedDate:(id)fp8 forToDos:(id)fp12;
- (void)_editToDo:(id)fp8 withTableColumn:(id)fp12;
@end
